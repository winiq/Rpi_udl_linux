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
	{ 0x98cf60b3, "strlen" },
	{ 0xa48eca6a, "snd_mpu401_uart_new" },
	{ 0x3256de71, "snd_devm_card_new" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xdebf2c8b, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x527548f8, "pnp_unregister_driver" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0x82de26c5, "pnp_register_driver" },
	{ 0x79806c3a, "pnp_get_resource" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x905c9800, "param_ops_long" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x81c1d19d, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-mpu401-uart,snd");

MODULE_ALIAS("pnp:dPNPb006*");
MODULE_ALIAS("acpi*:PNPB006:*");

MODULE_INFO(srcversion, "79DE2256DA0653975AC6DC4");
