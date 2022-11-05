#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xbdfb33d, "desc_to_gpio" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xfe476039, "ktime_get_resolution_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6257a2f, "complete" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cdht11");
MODULE_ALIAS("of:N*T*Cdht11C*");

MODULE_INFO(srcversion, "C8951B50A6701E9F86C2925");
