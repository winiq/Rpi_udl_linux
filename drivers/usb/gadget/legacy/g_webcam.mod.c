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
	{ 0x6ad68bf3, "usb_add_config" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0x1a448dcc, "usb_composite_overwrite_options" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd444fe93, "usb_composite_probe" },
	{ 0xe0cfb373, "usb_add_function" },
	{ 0x1e7eb65d, "usb_put_function" },
	{ 0xdcc3c6a, "usb_composite_unregister" },
	{ 0x3da5bc30, "usb_get_function" },
	{ 0x9f90d071, "usb_string_ids_tab" },
	{ 0x6362ded4, "usb_get_function_instance" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0xb92873bd, "param_ops_uint" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "54406BDA411E9928B4D2928");
