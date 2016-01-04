/**
 * WarfaceBot, a blind XMPP client for Warface (FPS)
 * Copyright (C) 2015 Levak Borok <levak92@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gio/gio.h>

#include <wb_dbus_methods.h>

#include <wb_cmd.h>

/*
** DBus method call: "BuddyWhois"
*/
gboolean on_handle_buddy_whois(Warfacebot *object,
                               GDBusMethodInvocation *invocation,
                               const gchar *arg_Nickname)
{
    UNIMPLEMENTED_API_METHOD(invocation);

    warfacebot_complete_buddy_whois(object, invocation, NULL);

    return TRUE;
}
