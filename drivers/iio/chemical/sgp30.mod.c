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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9c5d5b94, "crc8" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x6f2a887e, "kthread_stop" },
};

MODULE_INFO(depends, "industrialio,crc8");

MODULE_ALIAS("i2c:sgp30");
MODULE_ALIAS("i2c:sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgp30");
MODULE_ALIAS("of:N*T*Csensirion,sgp30C*");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3");
MODULE_ALIAS("of:N*T*Csensirion,sgpc3C*");

MODULE_INFO(srcversion, "C7F5BD3E5ADCE3E3C7E444A");
