/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-01-03 13:22:35
 * @LastEditTime: 2023-01-03 13:31:47
 * @LastEditors: yao.xie
 */
//
// Created by 谢瑶 on 2023/1/3.
//

#ifndef DEV_UUID_H
#define DEV_UUID_H
#include <uuid/uuid.h>
#include <string>

class UUID {
public:
	static std::string generate() {
		uuid_t uuid;
#ifdef _WIN32
		// define something for Windows (32-bit and 64-bit, this part is common)

#elif _WIN64
		// define something for Windows (64-bit only)
#elif __APPLE__

#elif TARGET_IPHONE_SIMULATOR
		// iOS Simulator
#elif TARGET_OS_IPHONE
		// iOS device
#elif TARGET_OS_MAC
		// Other kinds of Mac OS
		uuid_string_t str;
#elif __ANDROID__
		// android
#elif __linux__
		// linux
		char str[37] = {};
#elif __unix__ // all unices not caught above
		// Unix
#elif defined(_POSIX_VERSION)
		// POSIX
#else
#error "Unknown"
#endif
		uuid_generate(uuid);
		uuid_unparse(uuid, str);
		return str;
	}
};

#endif // DEV_UUID_H
