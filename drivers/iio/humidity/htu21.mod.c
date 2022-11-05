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
	{ 0x6698e9dd, "iio_read_const_attr" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x9a1657d6, "ms_sensors_show_battery_low" },
	{ 0x36789a81, "ms_sensors_show_heater" },
	{ 0x1e19e251, "ms_sensors_write_heater" },
	{ 0x6ced5167, "ms_sensors_ht_read_temperature" },
	{ 0x7d0516f8, "ms_sensors_ht_read_humidity" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xaabf850c, "ms_sensors_write_resolution" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xf9cd7da0, "ms_sensors_read_serial" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x461afb72, "devm_iio_device_alloc" },
};

MODULE_INFO(depends, "industrialio,ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,htu21");
MODULE_ALIAS("of:N*T*Cmeas,htu21C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidity");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidityC*");
MODULE_ALIAS("i2c:htu21");
MODULE_ALIAS("i2c:ms8607-humidity");

MODULE_INFO(srcversion, "B219FC8C8908C425D8BAA5E");
