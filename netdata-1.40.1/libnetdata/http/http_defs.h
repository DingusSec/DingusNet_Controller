// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef NETDATA_HTTP_DEFS_H
#define NETDATA_HTTP_DEFS_H

// HTTP_CODES 2XX Success
#define HTTP_RESP_OK 200

// HTTP_CODES 3XX Redirections
#define HTTP_RESP_MOVED_PERM 301
#define HTTP_RESP_REDIR_TEMP 307
#define HTTP_RESP_REDIR_PERM 308

// HTTP_CODES 4XX Client Errors
#define HTTP_RESP_BAD_REQUEST 400
#define HTTP_RESP_UNAUTHORIZED 401
#define HTTP_RESP_FORBIDDEN 403
#define HTTP_RESP_NOT_FOUND 404
#define HTTP_RESP_CONFLICT 409
#define HTTP_RESP_PRECOND_FAIL 412
#define HTTP_RESP_CONTENT_TOO_LONG 413

// HTTP_CODES 5XX Server Errors
#define HTTP_RESP_INTERNAL_SERVER_ERROR 500
#define HTTP_RESP_BACKEND_FETCH_FAILED 503  // 503 is right
#define HTTP_RESP_SERVICE_UNAVAILABLE 503   // 503 is right
#define HTTP_RESP_GATEWAY_TIMEOUT 504
#define HTTP_RESP_BACKEND_RESPONSE_INVALID 591

#endif /* NETDATA_HTTP_DEFS_H */
