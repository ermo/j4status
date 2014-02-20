/*
 * libj4status-plugin - Library to implement a j4status plugin
 *
 * Copyright © 2012-2013 Quentin "Sardem FF7" Glidic
 *
 * This file is part of j4status.
 *
 * j4status is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * j4status is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with j4status. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __J4STATUS_J4STATUS_PLUGIN_H__
#define __J4STATUS_J4STATUS_PLUGIN_H__

typedef struct _J4statusCoreInterface J4statusCoreInterface;


typedef struct _J4statusPluginContext J4statusPluginContext;

typedef J4statusPluginContext *(*J4statusPluginInitFunc)(J4statusCoreInterface *core);
typedef void(*J4statusPluginSimpleFunc)(J4statusPluginContext *context);


#define LIBJ4STATUS_PLUGIN_INTERFACE_ADD_CALLBACK(type, Type, action, Action) void libj4status_##type##_plugin_interface_add_##action##_callback(J4status##Type##PluginInterface *interface, J4statusPlugin##Action##Func callback)


typedef enum {
    J4STATUS_STATE_NO_STATE = -1,
    J4STATUS_STATE_UNAVAILABLE = 0,
    J4STATUS_STATE_BAD,
    J4STATUS_STATE_AVERAGE,
    J4STATUS_STATE_GOOD,
    J4STATUS_STATE_URGENT
} J4statusState;

typedef struct _J4statusSection J4statusSection;

#endif /* __J4STATUS_J4STATUS_PLUGIN_H__ */
