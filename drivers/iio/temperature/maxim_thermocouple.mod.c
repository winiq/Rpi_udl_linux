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
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x5be0559f, "iio_device_release_direct_mode" },
	{ 0x67d05293, "iio_device_claim_direct_mode" },
	{ 0xc4d29330, "iio_push_to_buffers" },
	{ 0x48de6280, "iio_get_time_ns" },
	{ 0x853544de, "iio_trigger_notify_done" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0xb2c768b1, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0x9667cc7c, "spi_get_device_id" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cmaxim,max6675");
MODULE_ALIAS("of:N*T*Cmaxim,max6675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855");
MODULE_ALIAS("of:N*T*Cmaxim,max31855C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855k");
MODULE_ALIAS("of:N*T*Cmaxim,max31855kC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855j");
MODULE_ALIAS("of:N*T*Cmaxim,max31855jC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855n");
MODULE_ALIAS("of:N*T*Cmaxim,max31855nC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855s");
MODULE_ALIAS("of:N*T*Cmaxim,max31855sC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855t");
MODULE_ALIAS("of:N*T*Cmaxim,max31855tC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855e");
MODULE_ALIAS("of:N*T*Cmaxim,max31855eC*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855r");
MODULE_ALIAS("of:N*T*Cmaxim,max31855rC*");
MODULE_ALIAS("spi:max6675");
MODULE_ALIAS("spi:max31855");
MODULE_ALIAS("spi:max31855k");
MODULE_ALIAS("spi:max31855j");
MODULE_ALIAS("spi:max31855n");
MODULE_ALIAS("spi:max31855s");
MODULE_ALIAS("spi:max31855t");
MODULE_ALIAS("spi:max31855e");
MODULE_ALIAS("spi:max31855r");

MODULE_INFO(srcversion, "76BAD4AEEC1E43AB8CF3E48");
