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
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x4492ff0e, "input_ff_create_memless" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9bbfb761, "__hid_request" },
	{ 0x5495392, "hid_debug" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa5f5441b, "hid_validate_values" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C50C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C101");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C704");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C30A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C512");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C215");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C216");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C294");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C211");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C219");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C24F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C283");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C286");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C295");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA03");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA04");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C299");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C298");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C293");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C218");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C287");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C626");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C623");

MODULE_INFO(srcversion, "E5BB2D30D85F2F5140F3F31");
