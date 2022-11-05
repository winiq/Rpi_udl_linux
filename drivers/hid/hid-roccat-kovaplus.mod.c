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
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xad25b150, "roccat_connect" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0xfd91890b, "roccat_common2_send_with_status" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x27e4190b, "roccat_common2_receive" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2ee8c8d8, "roccat_common2_send" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x28343fb6, "hid_hw_stop" },
};

MODULE_INFO(depends, "hid-roccat,hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002D50");

MODULE_INFO(srcversion, "0836A8B69508F5E0B0CAF01");
