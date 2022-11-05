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
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x73053428, "dev_err_probe" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc5604800, "clk_set_rate_exclusive" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xaf4b9ca, "devm_clk_register" },
	{ 0x72b31228, "clk_hw_register_clkdev" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x176d8cb2, "devm_ioremap_resource" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xe37d4b98, "i2c_del_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xacb4d88c, "clk_rate_exclusive_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2cC*");

MODULE_INFO(srcversion, "8E410C86977114B9A6294D4");
