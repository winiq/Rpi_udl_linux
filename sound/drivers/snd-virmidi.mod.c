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
	{ 0x826655e4, "param_ops_int" },
	{ 0x3256de71, "snd_devm_card_new" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x6d8be6b0, "snd_virmidi_new" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x81c1d19d, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd,snd-seq-virmidi");


MODULE_INFO(srcversion, "F8745A7ADC6429698BBED19");
