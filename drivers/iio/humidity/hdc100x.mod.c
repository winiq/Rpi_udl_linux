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
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0xb2c768b1, "devm_iio_triggered_buffer_setup_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xc46051e2, "i2c_smbus_write_word_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5be0559f, "iio_device_release_direct_mode" },
	{ 0x67d05293, "iio_device_claim_direct_mode" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x853544de, "iio_trigger_notify_done" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc4d29330, "iio_push_to_buffers" },
	{ 0x48de6280, "iio_get_time_ns" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x55bec97e, "i2c_smbus_write_byte" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,hdc1000");
MODULE_ALIAS("of:N*T*Cti,hdc1000C*");
MODULE_ALIAS("of:N*T*Cti,hdc1008");
MODULE_ALIAS("of:N*T*Cti,hdc1008C*");
MODULE_ALIAS("of:N*T*Cti,hdc1010");
MODULE_ALIAS("of:N*T*Cti,hdc1010C*");
MODULE_ALIAS("of:N*T*Cti,hdc1050");
MODULE_ALIAS("of:N*T*Cti,hdc1050C*");
MODULE_ALIAS("of:N*T*Cti,hdc1080");
MODULE_ALIAS("of:N*T*Cti,hdc1080C*");
MODULE_ALIAS("i2c:hdc100x");
MODULE_ALIAS("i2c:hdc1000");
MODULE_ALIAS("i2c:hdc1008");
MODULE_ALIAS("i2c:hdc1010");
MODULE_ALIAS("i2c:hdc1050");
MODULE_ALIAS("i2c:hdc1080");

MODULE_INFO(srcversion, "50C719834C1E73D21F9B0D9");
