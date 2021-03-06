// Copyright [2020] <Copyright Kevin, kevin.lau.gd@gmail.com>

#ifndef FT_INCLUDE_CEP_DATA_RESPONSE_H_
#define FT_INCLUDE_CEP_DATA_RESPONSE_H_

#include <string>

/*
 * GATEWAY --> OMS
 */

namespace ft {

struct OrderAcceptance {
  uint64_t order_id;
};

struct OrderRejection {
  uint64_t order_id;
  std::string reason;
};

struct OrderCancellation {
  uint64_t order_id;
  int canceled_volume;
};

struct OrderCancelRejection {
  uint64_t order_id;
  std::string reason;
};

struct Trade {
  uint64_t order_id;
  uint32_t tid;
  uint32_t direction;
  uint32_t offset;
  uint32_t trade_type;
  int volume;
  double price;
  double amount;
};

}  // namespace ft

#endif  // FT_INCLUDE_CEP_DATA_RESPONSE_H_
