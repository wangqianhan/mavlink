// MESSAGE ZIDINGYI PACKING

#define MAVLINK_MSG_ID_ZIDINGYI 168

MAVPACKED(
typedef struct __mavlink_zidingyi_t {
 uint64_t x; /*< x.*/
 uint64_t y; /*< y.*/
 uint64_t z; /*< z.*/
}) mavlink_zidingyi_t;

#define MAVLINK_MSG_ID_ZIDINGYI_LEN 24
#define MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN 24
#define MAVLINK_MSG_ID_168_LEN 24
#define MAVLINK_MSG_ID_168_MIN_LEN 24

#define MAVLINK_MSG_ID_ZIDINGYI_CRC 239
#define MAVLINK_MSG_ID_168_CRC 239



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ZIDINGYI { \
	168, \
	"ZIDINGYI", \
	3, \
	{  { "x", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_zidingyi_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_zidingyi_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_zidingyi_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ZIDINGYI { \
	"ZIDINGYI", \
	3, \
	{  { "x", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_zidingyi_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_zidingyi_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_zidingyi_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a zidingyi message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x x.
 * @param y y.
 * @param z z.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zidingyi_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint64_t x, uint64_t y, uint64_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ZIDINGYI_LEN];
	_mav_put_uint64_t(buf, 0, x);
	_mav_put_uint64_t(buf, 8, y);
	_mav_put_uint64_t(buf, 16, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZIDINGYI_LEN);
#else
	mavlink_zidingyi_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZIDINGYI_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ZIDINGYI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN, MAVLINK_MSG_ID_ZIDINGYI_LEN, MAVLINK_MSG_ID_ZIDINGYI_CRC);
}

/**
 * @brief Pack a zidingyi message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x x.
 * @param y y.
 * @param z z.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_zidingyi_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint64_t x,uint64_t y,uint64_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ZIDINGYI_LEN];
	_mav_put_uint64_t(buf, 0, x);
	_mav_put_uint64_t(buf, 8, y);
	_mav_put_uint64_t(buf, 16, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ZIDINGYI_LEN);
#else
	mavlink_zidingyi_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ZIDINGYI_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ZIDINGYI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN, MAVLINK_MSG_ID_ZIDINGYI_LEN, MAVLINK_MSG_ID_ZIDINGYI_CRC);
}

/**
 * @brief Encode a zidingyi struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param zidingyi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zidingyi_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_zidingyi_t* zidingyi)
{
	return mavlink_msg_zidingyi_pack(system_id, component_id, msg, zidingyi->x, zidingyi->y, zidingyi->z);
}

/**
 * @brief Encode a zidingyi struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param zidingyi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_zidingyi_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_zidingyi_t* zidingyi)
{
	return mavlink_msg_zidingyi_pack_chan(system_id, component_id, chan, msg, zidingyi->x, zidingyi->y, zidingyi->z);
}

/**
 * @brief Send a zidingyi message
 * @param chan MAVLink channel to send the message
 *
 * @param x x.
 * @param y y.
 * @param z z.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_zidingyi_send(mavlink_channel_t chan, uint64_t x, uint64_t y, uint64_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ZIDINGYI_LEN];
	_mav_put_uint64_t(buf, 0, x);
	_mav_put_uint64_t(buf, 8, y);
	_mav_put_uint64_t(buf, 16, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZIDINGYI, buf, MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN, MAVLINK_MSG_ID_ZIDINGYI_LEN, MAVLINK_MSG_ID_ZIDINGYI_CRC);
#else
	mavlink_zidingyi_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZIDINGYI, (const char *)&packet, MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN, MAVLINK_MSG_ID_ZIDINGYI_LEN, MAVLINK_MSG_ID_ZIDINGYI_CRC);
#endif
}

/**
 * @brief Send a zidingyi message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_zidingyi_send_struct(mavlink_channel_t chan, const mavlink_zidingyi_t* zidingyi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_zidingyi_send(chan, zidingyi->x, zidingyi->y, zidingyi->z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZIDINGYI, (const char *)zidingyi, MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN, MAVLINK_MSG_ID_ZIDINGYI_LEN, MAVLINK_MSG_ID_ZIDINGYI_CRC);
#endif
}

#if MAVLINK_MSG_ID_ZIDINGYI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_zidingyi_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t x, uint64_t y, uint64_t z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint64_t(buf, 0, x);
	_mav_put_uint64_t(buf, 8, y);
	_mav_put_uint64_t(buf, 16, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZIDINGYI, buf, MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN, MAVLINK_MSG_ID_ZIDINGYI_LEN, MAVLINK_MSG_ID_ZIDINGYI_CRC);
#else
	mavlink_zidingyi_t *packet = (mavlink_zidingyi_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ZIDINGYI, (const char *)packet, MAVLINK_MSG_ID_ZIDINGYI_MIN_LEN, MAVLINK_MSG_ID_ZIDINGYI_LEN, MAVLINK_MSG_ID_ZIDINGYI_CRC);
#endif
}
#endif

#endif

// MESSAGE ZIDINGYI UNPACKING


/**
 * @brief Get field x from zidingyi message
 *
 * @return x.
 */
static inline uint64_t mavlink_msg_zidingyi_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field y from zidingyi message
 *
 * @return y.
 */
static inline uint64_t mavlink_msg_zidingyi_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field z from zidingyi message
 *
 * @return z.
 */
static inline uint64_t mavlink_msg_zidingyi_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Decode a zidingyi message into a struct
 *
 * @param msg The message to decode
 * @param zidingyi C-struct to decode the message contents into
 */
static inline void mavlink_msg_zidingyi_decode(const mavlink_message_t* msg, mavlink_zidingyi_t* zidingyi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	zidingyi->x = mavlink_msg_zidingyi_get_x(msg);
	zidingyi->y = mavlink_msg_zidingyi_get_y(msg);
	zidingyi->z = mavlink_msg_zidingyi_get_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ZIDINGYI_LEN? msg->len : MAVLINK_MSG_ID_ZIDINGYI_LEN;
        memset(zidingyi, 0, MAVLINK_MSG_ID_ZIDINGYI_LEN);
	memcpy(zidingyi, _MAV_PAYLOAD(msg), len);
#endif
}
