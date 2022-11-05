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
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x53ef1071, "spi_finalize_current_transfer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x18030d6c, "debugfs_create_u64" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3332974e, "spi_register_controller" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x175807a4, "devm_platform_ioremap_resource" },
	{ 0xd5b9bcf9, "__devm_spi_alloc_controller" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd30dfa9, "spi_unregister_controller" },
	{ 0x85a8f9d1, "debugfs_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spiC*");

MODULE_INFO(srcversion, "E657EC77615E4AACD9ACE5B");
