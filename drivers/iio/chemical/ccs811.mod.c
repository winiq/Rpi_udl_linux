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
	{ 0x5be0559f, "iio_device_release_direct_mode" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x67d05293, "iio_device_claim_direct_mode" },
	{ 0xc074e4aa, "i2c_smbus_write_i2c_block_data" },
	{ 0x6781e000, "__iio_device_register" },
	{ 0x89f36ef2, "iio_triggered_buffer_setup_ext" },
	{ 0xdd981006, "__module_get" },
	{ 0xadc9aed4, "get_device" },
	{ 0x6e28c8f9, "__iio_trigger_register" },
	{ 0x9129b9f, "devm_iio_trigger_alloc" },
	{ 0x8851bdc9, "iio_device_id" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x55bec97e, "i2c_smbus_write_byte" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0x9170c468, "iio_trigger_poll" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x853544de, "iio_trigger_notify_done" },
	{ 0xc4d29330, "iio_push_to_buffers" },
	{ 0x48de6280, "iio_get_time_ns" },
	{ 0x7a2d3100, "i2c_smbus_read_i2c_block_data" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0xc73c4249, "iio_trigger_unregister" },
	{ 0x2c4ff1ce, "iio_triggered_buffer_cleanup" },
	{ 0xb6eed1c0, "iio_device_unregister" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cams,ccs811");
MODULE_ALIAS("of:N*T*Cams,ccs811C*");
MODULE_ALIAS("i2c:ccs811");

MODULE_INFO(srcversion, "9F564C19F6FF864735D6AFF");
