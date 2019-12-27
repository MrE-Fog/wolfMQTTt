/* mqttnet.h
 *
 * Copyright (C) 2006-2019 wolfSSL Inc.
 *
 * This file is part of wolfMQTT.
 *
 * wolfMQTT is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfMQTT is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1335, USA
 */

#ifndef WOLFMQTT_NET_H
#define WOLFMQTT_NET_H

#ifdef __cplusplus
    extern "C" {
#endif

#include "examples/mqttexample.h"

/* Default MQTT host broker to use, when none is specified in the examples */
#ifndef DEFAULT_MQTT_HOST
#define DEFAULT_MQTT_HOST       "mqtt.eclipse.org" /* broker.hivemq.com */
#endif

/* Functions used to handle the MqttNet structure creation / destruction */
int MqttClientNet_Init(MqttNet* net, MQTTCtx* mqttCtx);
int MqttClientNet_DeInit(MqttNet* net);
#ifdef WOLFMQTT_SN
int SN_ClientNet_Init(MqttNet* net, MQTTCtx* mqttCtx);
#endif

#ifdef __cplusplus
    } /* extern "C" */
#endif

#endif /* WOLFMQTT_NET_H */
