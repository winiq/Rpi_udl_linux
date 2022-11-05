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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa6257a2f, "complete" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbd820064, "i2c_add_numbered_adapter" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x18f5ec4c, "clk_get" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xdfb34f9c, "of_alias_get_id" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe37d4b98, "i2c_del_adapter" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2cC*");

MODULE_INFO(srcversion, "0C1F4F8690E98B7CEAABAE5");
