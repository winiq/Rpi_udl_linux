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
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x803a39ab, "devm_rc_register_device" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0x44a05a39, "devm_rc_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-tx");
MODULE_ALIAS("of:N*T*Cgpio-ir-txC*");

MODULE_INFO(srcversion, "E14CF388053FE6036573EC0");
