import 'dart:async';

import 'package:flutter/services.dart';

class HanyinPrinterFluttify {
  static const MethodChannel _channel =
      const MethodChannel('hanyin_printer_fluttify');

  static Future<String> get platformVersion async {
    final String version = await _channel.invokeMethod('getPlatformVersion');
    return version;
  }
}
