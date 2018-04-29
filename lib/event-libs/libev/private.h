/*
 * libwebsockets - small server side websockets and web server implementation
 *
 * Copyright (C) 2010 - 2018 Andy Green <andy@warmcat.com>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation:
 *  version 2.1 of the License.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 *
 *  This is included from private-libwebsockets.h if LWS_WITH_LIBEV
 */

#include <ev.h>

struct lws_pt_eventlibs_libev {
	struct ev_loop *io_loop;
};

struct lws_io_watcher_libev {
	ev_io watcher;
};

struct lws_signal_watcher_libev {
	ev_signal watcher;
};

struct lws_context_eventlibs_libev {
	int placeholder;
};

#define LWS_LIBEV_ENABLED(context) lws_check_opt(context->options, \
					LWS_SERVER_OPTION_LIBEV)

extern struct lws_event_loop_ops event_loop_ops_ev;

LWS_EXTERN void
lws_libev_run(const struct lws_context *context, int tsi);
LWS_EXTERN void
lws_feature_status_libev(const struct lws_context_creation_info *info);