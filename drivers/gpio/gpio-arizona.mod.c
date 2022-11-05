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
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x9609ced3, "devm_gpiochip_add_data_with_key" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{  0x6e972, "gpiochip_line_is_persistent" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x33a37231, "regcache_drop_region" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xffde228, "gpiochip_get_data" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD52C4C462D62BF4C460E6C");
