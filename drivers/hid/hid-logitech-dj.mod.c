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
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0xcf2a6966, "up" },
	{ 0xcc1fe040, "hid_hw_open" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x262d3e4, "hid_compare_device_paths" },
	{ 0x7b3ae27f, "usb_hid_driver" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6597f682, "hid_add_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcb5b8698, "hid_allocate_device" },
	{ 0x97115630, "hid_destroy_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9bbfb761, "__hid_request" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x2321f01c, "hid_input_report" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x836b530a, "hid_parse_report" },
	{ 0x92997ed8, "_printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x15ba50a6, "jiffies" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C534");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C531");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C537");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C539");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C513");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C517");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C51B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C713");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C714");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71F");

MODULE_INFO(srcversion, "1EDBA919DEC7B92DE057E86");
