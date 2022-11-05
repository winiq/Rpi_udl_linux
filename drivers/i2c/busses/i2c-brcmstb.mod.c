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
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6257a2f, "complete" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x6e7bf422, "platform_get_irq_optional" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xf6b822c5, "devm_iounmap" },
	{ 0xa44eb13e, "platform_get_resource_byname" },
	{ 0x2f0bd73a, "of_device_is_compatible" },
	{ 0x176d8cb2, "devm_ioremap_resource" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xe37d4b98, "i2c_del_adapter" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,brcmstb-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,brcmstb-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,brcmper-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,brcmper-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-hdmi-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-hdmi-i2cC*");

MODULE_INFO(srcversion, "E3195EEF544D527955E00AD");
