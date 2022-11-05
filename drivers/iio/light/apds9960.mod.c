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
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0x6781e000, "__iio_device_register" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x649a931f, "devm_regmap_field_alloc" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x91fcfc3d, "devm_iio_kfifo_buffer_setup_ext" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x9ca235b9, "regmap_field_update_bits_base" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xb8a8fd41, "iio_push_event" },
	{ 0x48de6280, "iio_get_time_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4d29330, "iio_push_to_buffers" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0xb6eed1c0, "iio_device_unregister" },
	{ 0x269fdf77, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("acpi*:MSHW0184:*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "4C859F07318752919C04EEF");
