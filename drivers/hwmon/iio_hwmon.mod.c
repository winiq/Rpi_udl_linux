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
	{ 0xf2560f6a, "devm_hwmon_device_register_with_groups" },
	{ 0x7410aba2, "strreplace" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc5df4121, "devm_iio_channel_get_all" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaef926eb, "iio_get_channel_type" },
	{ 0x5ecfd9f1, "iio_read_channel_processed" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Ciio-hwmon");
MODULE_ALIAS("of:N*T*Ciio-hwmonC*");

MODULE_INFO(srcversion, "6080B607822E57DC2C80CE4");
