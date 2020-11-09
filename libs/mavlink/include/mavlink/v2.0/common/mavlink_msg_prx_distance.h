#pragma once
// MESSAGE PRX_DISTANCE PACKING

#define MAVLINK_MSG_ID_PRX_DISTANCE 276

MAVPACKED(
typedef struct __mavlink_prx_distance_t {
 float dist0; /*<  */
 float dist45; /*<  */
 float dist90; /*<  */
 float dist135; /*<  */
 float dist180; /*<  */
 float dist225; /*<  */
 float dist270; /*<  */
 float dist315; /*<  */
 float closest_angle; /*<  */
 float closest_dist; /*<  */
 uint8_t health; /*<  */
 uint8_t enable; /*<  */
}) mavlink_prx_distance_t;

#define MAVLINK_MSG_ID_PRX_DISTANCE_LEN 42
#define MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN 42
#define MAVLINK_MSG_ID_276_LEN 42
#define MAVLINK_MSG_ID_276_MIN_LEN 42

#define MAVLINK_MSG_ID_PRX_DISTANCE_CRC 179
#define MAVLINK_MSG_ID_276_CRC 179



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_PRX_DISTANCE { \
    276, \
    "PRX_DISTANCE", \
    12, \
    {  { "health", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_prx_distance_t, health) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_prx_distance_t, enable) }, \
         { "dist0", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_prx_distance_t, dist0) }, \
         { "dist45", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_prx_distance_t, dist45) }, \
         { "dist90", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_prx_distance_t, dist90) }, \
         { "dist135", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_prx_distance_t, dist135) }, \
         { "dist180", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_prx_distance_t, dist180) }, \
         { "dist225", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_prx_distance_t, dist225) }, \
         { "dist270", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_prx_distance_t, dist270) }, \
         { "dist315", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_prx_distance_t, dist315) }, \
         { "closest_angle", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_prx_distance_t, closest_angle) }, \
         { "closest_dist", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_prx_distance_t, closest_dist) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_PRX_DISTANCE { \
    "PRX_DISTANCE", \
    12, \
    {  { "health", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_prx_distance_t, health) }, \
         { "enable", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_prx_distance_t, enable) }, \
         { "dist0", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_prx_distance_t, dist0) }, \
         { "dist45", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_prx_distance_t, dist45) }, \
         { "dist90", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_prx_distance_t, dist90) }, \
         { "dist135", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_prx_distance_t, dist135) }, \
         { "dist180", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_prx_distance_t, dist180) }, \
         { "dist225", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_prx_distance_t, dist225) }, \
         { "dist270", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_prx_distance_t, dist270) }, \
         { "dist315", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_prx_distance_t, dist315) }, \
         { "closest_angle", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_prx_distance_t, closest_angle) }, \
         { "closest_dist", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_prx_distance_t, closest_dist) }, \
         } \
}
#endif

/**
 * @brief Pack a prx_distance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param health  
 * @param enable  
 * @param dist0  
 * @param dist45  
 * @param dist90  
 * @param dist135  
 * @param dist180  
 * @param dist225  
 * @param dist270  
 * @param dist315  
 * @param closest_angle  
 * @param closest_dist  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_prx_distance_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t health, uint8_t enable, float dist0, float dist45, float dist90, float dist135, float dist180, float dist225, float dist270, float dist315, float closest_angle, float closest_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PRX_DISTANCE_LEN];
    _mav_put_float(buf, 0, dist0);
    _mav_put_float(buf, 4, dist45);
    _mav_put_float(buf, 8, dist90);
    _mav_put_float(buf, 12, dist135);
    _mav_put_float(buf, 16, dist180);
    _mav_put_float(buf, 20, dist225);
    _mav_put_float(buf, 24, dist270);
    _mav_put_float(buf, 28, dist315);
    _mav_put_float(buf, 32, closest_angle);
    _mav_put_float(buf, 36, closest_dist);
    _mav_put_uint8_t(buf, 40, health);
    _mav_put_uint8_t(buf, 41, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRX_DISTANCE_LEN);
#else
    mavlink_prx_distance_t packet;
    packet.dist0 = dist0;
    packet.dist45 = dist45;
    packet.dist90 = dist90;
    packet.dist135 = dist135;
    packet.dist180 = dist180;
    packet.dist225 = dist225;
    packet.dist270 = dist270;
    packet.dist315 = dist315;
    packet.closest_angle = closest_angle;
    packet.closest_dist = closest_dist;
    packet.health = health;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRX_DISTANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PRX_DISTANCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_CRC);
}

/**
 * @brief Pack a prx_distance message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param health  
 * @param enable  
 * @param dist0  
 * @param dist45  
 * @param dist90  
 * @param dist135  
 * @param dist180  
 * @param dist225  
 * @param dist270  
 * @param dist315  
 * @param closest_angle  
 * @param closest_dist  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_prx_distance_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t health,uint8_t enable,float dist0,float dist45,float dist90,float dist135,float dist180,float dist225,float dist270,float dist315,float closest_angle,float closest_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PRX_DISTANCE_LEN];
    _mav_put_float(buf, 0, dist0);
    _mav_put_float(buf, 4, dist45);
    _mav_put_float(buf, 8, dist90);
    _mav_put_float(buf, 12, dist135);
    _mav_put_float(buf, 16, dist180);
    _mav_put_float(buf, 20, dist225);
    _mav_put_float(buf, 24, dist270);
    _mav_put_float(buf, 28, dist315);
    _mav_put_float(buf, 32, closest_angle);
    _mav_put_float(buf, 36, closest_dist);
    _mav_put_uint8_t(buf, 40, health);
    _mav_put_uint8_t(buf, 41, enable);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRX_DISTANCE_LEN);
#else
    mavlink_prx_distance_t packet;
    packet.dist0 = dist0;
    packet.dist45 = dist45;
    packet.dist90 = dist90;
    packet.dist135 = dist135;
    packet.dist180 = dist180;
    packet.dist225 = dist225;
    packet.dist270 = dist270;
    packet.dist315 = dist315;
    packet.closest_angle = closest_angle;
    packet.closest_dist = closest_dist;
    packet.health = health;
    packet.enable = enable;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRX_DISTANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_PRX_DISTANCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_CRC);
}

/**
 * @brief Encode a prx_distance struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param prx_distance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_prx_distance_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_prx_distance_t* prx_distance)
{
    return mavlink_msg_prx_distance_pack(system_id, component_id, msg, prx_distance->health, prx_distance->enable, prx_distance->dist0, prx_distance->dist45, prx_distance->dist90, prx_distance->dist135, prx_distance->dist180, prx_distance->dist225, prx_distance->dist270, prx_distance->dist315, prx_distance->closest_angle, prx_distance->closest_dist);
}

/**
 * @brief Encode a prx_distance struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param prx_distance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_prx_distance_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_prx_distance_t* prx_distance)
{
    return mavlink_msg_prx_distance_pack_chan(system_id, component_id, chan, msg, prx_distance->health, prx_distance->enable, prx_distance->dist0, prx_distance->dist45, prx_distance->dist90, prx_distance->dist135, prx_distance->dist180, prx_distance->dist225, prx_distance->dist270, prx_distance->dist315, prx_distance->closest_angle, prx_distance->closest_dist);
}

/**
 * @brief Send a prx_distance message
 * @param chan MAVLink channel to send the message
 *
 * @param health  
 * @param enable  
 * @param dist0  
 * @param dist45  
 * @param dist90  
 * @param dist135  
 * @param dist180  
 * @param dist225  
 * @param dist270  
 * @param dist315  
 * @param closest_angle  
 * @param closest_dist  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_prx_distance_send(mavlink_channel_t chan, uint8_t health, uint8_t enable, float dist0, float dist45, float dist90, float dist135, float dist180, float dist225, float dist270, float dist315, float closest_angle, float closest_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_PRX_DISTANCE_LEN];
    _mav_put_float(buf, 0, dist0);
    _mav_put_float(buf, 4, dist45);
    _mav_put_float(buf, 8, dist90);
    _mav_put_float(buf, 12, dist135);
    _mav_put_float(buf, 16, dist180);
    _mav_put_float(buf, 20, dist225);
    _mav_put_float(buf, 24, dist270);
    _mav_put_float(buf, 28, dist315);
    _mav_put_float(buf, 32, closest_angle);
    _mav_put_float(buf, 36, closest_dist);
    _mav_put_uint8_t(buf, 40, health);
    _mav_put_uint8_t(buf, 41, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRX_DISTANCE, buf, MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_CRC);
#else
    mavlink_prx_distance_t packet;
    packet.dist0 = dist0;
    packet.dist45 = dist45;
    packet.dist90 = dist90;
    packet.dist135 = dist135;
    packet.dist180 = dist180;
    packet.dist225 = dist225;
    packet.dist270 = dist270;
    packet.dist315 = dist315;
    packet.closest_angle = closest_angle;
    packet.closest_dist = closest_dist;
    packet.health = health;
    packet.enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRX_DISTANCE, (const char *)&packet, MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_CRC);
#endif
}

/**
 * @brief Send a prx_distance message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_prx_distance_send_struct(mavlink_channel_t chan, const mavlink_prx_distance_t* prx_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_prx_distance_send(chan, prx_distance->health, prx_distance->enable, prx_distance->dist0, prx_distance->dist45, prx_distance->dist90, prx_distance->dist135, prx_distance->dist180, prx_distance->dist225, prx_distance->dist270, prx_distance->dist315, prx_distance->closest_angle, prx_distance->closest_dist);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRX_DISTANCE, (const char *)prx_distance, MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_PRX_DISTANCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_prx_distance_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t health, uint8_t enable, float dist0, float dist45, float dist90, float dist135, float dist180, float dist225, float dist270, float dist315, float closest_angle, float closest_dist)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, dist0);
    _mav_put_float(buf, 4, dist45);
    _mav_put_float(buf, 8, dist90);
    _mav_put_float(buf, 12, dist135);
    _mav_put_float(buf, 16, dist180);
    _mav_put_float(buf, 20, dist225);
    _mav_put_float(buf, 24, dist270);
    _mav_put_float(buf, 28, dist315);
    _mav_put_float(buf, 32, closest_angle);
    _mav_put_float(buf, 36, closest_dist);
    _mav_put_uint8_t(buf, 40, health);
    _mav_put_uint8_t(buf, 41, enable);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRX_DISTANCE, buf, MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_CRC);
#else
    mavlink_prx_distance_t *packet = (mavlink_prx_distance_t *)msgbuf;
    packet->dist0 = dist0;
    packet->dist45 = dist45;
    packet->dist90 = dist90;
    packet->dist135 = dist135;
    packet->dist180 = dist180;
    packet->dist225 = dist225;
    packet->dist270 = dist270;
    packet->dist315 = dist315;
    packet->closest_angle = closest_angle;
    packet->closest_dist = closest_dist;
    packet->health = health;
    packet->enable = enable;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRX_DISTANCE, (const char *)packet, MAVLINK_MSG_ID_PRX_DISTANCE_MIN_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_LEN, MAVLINK_MSG_ID_PRX_DISTANCE_CRC);
#endif
}
#endif

#endif

// MESSAGE PRX_DISTANCE UNPACKING


/**
 * @brief Get field health from prx_distance message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_prx_distance_get_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field enable from prx_distance message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_prx_distance_get_enable(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Get field dist0 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist0(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field dist45 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist45(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field dist90 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist90(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field dist135 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist135(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field dist180 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist180(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field dist225 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist225(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field dist270 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist270(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field dist315 from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_dist315(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field closest_angle from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_closest_angle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field closest_dist from prx_distance message
 *
 * @return  
 */
static inline float mavlink_msg_prx_distance_get_closest_dist(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a prx_distance message into a struct
 *
 * @param msg The message to decode
 * @param prx_distance C-struct to decode the message contents into
 */
static inline void mavlink_msg_prx_distance_decode(const mavlink_message_t* msg, mavlink_prx_distance_t* prx_distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    prx_distance->dist0 = mavlink_msg_prx_distance_get_dist0(msg);
    prx_distance->dist45 = mavlink_msg_prx_distance_get_dist45(msg);
    prx_distance->dist90 = mavlink_msg_prx_distance_get_dist90(msg);
    prx_distance->dist135 = mavlink_msg_prx_distance_get_dist135(msg);
    prx_distance->dist180 = mavlink_msg_prx_distance_get_dist180(msg);
    prx_distance->dist225 = mavlink_msg_prx_distance_get_dist225(msg);
    prx_distance->dist270 = mavlink_msg_prx_distance_get_dist270(msg);
    prx_distance->dist315 = mavlink_msg_prx_distance_get_dist315(msg);
    prx_distance->closest_angle = mavlink_msg_prx_distance_get_closest_angle(msg);
    prx_distance->closest_dist = mavlink_msg_prx_distance_get_closest_dist(msg);
    prx_distance->health = mavlink_msg_prx_distance_get_health(msg);
    prx_distance->enable = mavlink_msg_prx_distance_get_enable(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_PRX_DISTANCE_LEN? msg->len : MAVLINK_MSG_ID_PRX_DISTANCE_LEN;
        memset(prx_distance, 0, MAVLINK_MSG_ID_PRX_DISTANCE_LEN);
    memcpy(prx_distance, _MAV_PAYLOAD(msg), len);
#endif
}
