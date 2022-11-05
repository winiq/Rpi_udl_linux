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
	{ 0x6993f778, "param_ops_string" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x6e7bf422, "platform_get_irq_optional" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x46bfceb4, "__devm_uio_register_device" },
	{ 0x9de9e1c6, "devm_kstrdup" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x76685e8a, "__pm_runtime_disable" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");

MODULE_INFO(srcversion, "A159FBEF0B6BDA203BF8FEB");
