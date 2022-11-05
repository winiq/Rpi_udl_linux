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
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0xe37d4b98, "i2c_del_adapter" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1964p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A40AFCBD9274E5BFE61B4D6");
