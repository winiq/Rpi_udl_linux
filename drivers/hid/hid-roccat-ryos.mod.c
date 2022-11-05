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
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0x265fe5e, "class_destroy" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0xbad97937, "__class_create" },
	{ 0x33624abf, "roccat_common2_sysfs_read" },
	{ 0x1f22ab9d, "roccat_common2_sysfs_write" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xad25b150, "roccat_connect" },
	{ 0x7261e55f, "roccat_common2_device_init_struct" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e4427c8, "roccat_report_event" },
};

MODULE_INFO(depends, "hid-roccat-common,hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");

MODULE_INFO(srcversion, "FE0A0B66572C5BAA349777D");
