#pragma once
// MESSAGE FMU_SYSTEM_ID PACKING

#define MAVLINK_MSG_ID_FMU_SYSTEM_ID 275

MAVPACKED(
typedef struct __mavlink_fmu_system_id_t {
 char fmu_system_id[40]; /*<  System ID from FMU*/
}) mavlink_fmu_system_id_t;

#define MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN 40
#define MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN 40
#define MAVLINK_MSG_ID_275_LEN 40
#define MAVLINK_MSG_ID_275_MIN_LEN 40

#define MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC 228
#define MAVLINK_MSG_ID_275_CRC 228

#define MAVLINK_MSG_FMU_SYSTEM_ID_FIELD_FMU_SYSTEM_ID_LEN 40

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FMU_SYSTEM_ID { \
    275, \
    "FMU_SYSTEM_ID", \
    1, \
    {  { "fmu_system_id", NULL, MAVLINK_TYPE_CHAR, 40, 0, offsetof(mavlink_fmu_system_id_t, fmu_system_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FMU_SYSTEM_ID { \
    "FMU_SYSTEM_ID", \
    1, \
    {  { "fmu_system_id", NULL, MAVLINK_TYPE_CHAR, 40, 0, offsetof(mavlink_fmu_system_id_t, fmu_system_id) }, \
         } \
}
#endif

/**
 * @brief Pack a fmu_system_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param fmu_system_id  System ID from FMU
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fmu_system_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *fmu_system_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN];

    _mav_put_char_array(buf, 0, fmu_system_id, 40);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN);
#else
    mavlink_fmu_system_id_t packet;

    mav_array_memcpy(packet.fmu_system_id, fmu_system_id, sizeof(char)*40);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FMU_SYSTEM_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC);
}

/**
 * @brief Pack a fmu_system_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fmu_system_id  System ID from FMU
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_fmu_system_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *fmu_system_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN];

    _mav_put_char_array(buf, 0, fmu_system_id, 40);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN);
#else
    mavlink_fmu_system_id_t packet;

    mav_array_memcpy(packet.fmu_system_id, fmu_system_id, sizeof(char)*40);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FMU_SYSTEM_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC);
}

/**
 * @brief Encode a fmu_system_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param fmu_system_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fmu_system_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_fmu_system_id_t* fmu_system_id)
{
    return mavlink_msg_fmu_system_id_pack(system_id, component_id, msg, fmu_system_id->fmu_system_id);
}

/**
 * @brief Encode a fmu_system_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fmu_system_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_fmu_system_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_fmu_system_id_t* fmu_system_id)
{
    return mavlink_msg_fmu_system_id_pack_chan(system_id, component_id, chan, msg, fmu_system_id->fmu_system_id);
}

/**
 * @brief Send a fmu_system_id message
 * @param chan MAVLink channel to send the message
 *
 * @param fmu_system_id  System ID from FMU
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_fmu_system_id_send(mavlink_channel_t chan, const char *fmu_system_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN];

    _mav_put_char_array(buf, 0, fmu_system_id, 40);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_SYSTEM_ID, buf, MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC);
#else
    mavlink_fmu_system_id_t packet;

    mav_array_memcpy(packet.fmu_system_id, fmu_system_id, sizeof(char)*40);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_SYSTEM_ID, (const char *)&packet, MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC);
#endif
}

/**
 * @brief Send a fmu_system_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_fmu_system_id_send_struct(mavlink_channel_t chan, const mavlink_fmu_system_id_t* fmu_system_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_fmu_system_id_send(chan, fmu_system_id->fmu_system_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_SYSTEM_ID, (const char *)fmu_system_id, MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_fmu_system_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *fmu_system_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, fmu_system_id, 40);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_SYSTEM_ID, buf, MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC);
#else
    mavlink_fmu_system_id_t *packet = (mavlink_fmu_system_id_t *)msgbuf;

    mav_array_memcpy(packet->fmu_system_id, fmu_system_id, sizeof(char)*40);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FMU_SYSTEM_ID, (const char *)packet, MAVLINK_MSG_ID_FMU_SYSTEM_ID_MIN_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN, MAVLINK_MSG_ID_FMU_SYSTEM_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE FMU_SYSTEM_ID UNPACKING


/**
 * @brief Get field fmu_system_id from fmu_system_id message
 *
 * @return  System ID from FMU
 */
static inline uint16_t mavlink_msg_fmu_system_id_get_fmu_system_id(const mavlink_message_t* msg, char *fmu_system_id)
{
    return _MAV_RETURN_char_array(msg, fmu_system_id, 40,  0);
}

/**
 * @brief Decode a fmu_system_id message into a struct
 *
 * @param msg The message to decode
 * @param fmu_system_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_fmu_system_id_decode(const mavlink_message_t* msg, mavlink_fmu_system_id_t* fmu_system_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_fmu_system_id_get_fmu_system_id(msg, fmu_system_id->fmu_system_id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN? msg->len : MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN;
        memset(fmu_system_id, 0, MAVLINK_MSG_ID_FMU_SYSTEM_ID_LEN);
    memcpy(fmu_system_id, _MAV_PAYLOAD(msg), len);
#endif
}
