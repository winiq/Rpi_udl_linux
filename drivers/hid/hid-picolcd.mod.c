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
	{ 0x7129e5f8, "hex_asc" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x5dc00640, "single_open" },
	{ 0x416e5db, "single_release" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x9bbfb761, "__hid_request" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xbd19b5, "seq_read" },
	{ 0xf7e00b27, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xcc1fe040, "hid_hw_open" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf85d1a0f, "hid_set_field" },
	{ 0x1de95874, "simple_open" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xe78eea12, "hid_alloc_report_buf" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5933243, "input_free_device" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8c3feffe, "hid_output_report" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "0E3D5FC259559CDAC6CCA7D");
