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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x5dc00640, "single_open" },
	{ 0x416e5db, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd19b5, "seq_read" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x16383ff2, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x19c66ed3, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x4daf0ad3, "tty_driver_flush_buffer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x5b0600d, "sysfs_notify" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8a540aeb, "stop_tty" },
	{ 0x60d6f484, "tty_write_room" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x59672155, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x7303ce54, "tty_register_ldisc" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "03588F092B82FAE394967A3");
