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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x42d0ab4c, "get_tree_single" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x37b50661, "kthread_unuse_mm" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x1f1b7926, "generic_delete_inode" },
	{ 0x814e762b, "dput" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd440f41d, "dup_iter" },
	{ 0xc514b829, "init_user_ns" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9021564e, "d_add" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x2e11bd9a, "usb_gadget_unregister_driver" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0xdad28002, "usb_gadget_set_state" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x35eb6dac, "d_delete" },
	{ 0x95775e45, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x26969d5b, "kill_litter_super" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9166fada, "strncpy" },
	{ 0xd68955c5, "fasync_helper" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x16f56968, "usb_gadget_vbus_draw" },
	{ 0xdd18cf86, "simple_dir_operations" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xe946549f, "kthread_use_mm" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8ac18822, "kiocb_set_cancel_fn" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x45868495, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x49d9f030, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x88e7257a, "current_time" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0xb4d6d6bf, "kill_fasync" },
	{ 0x9d893e16, "simple_statfs" },
	{ 0xd1b2ec27, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xd479a573, "new_inode" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0xcc0596d8, "simple_dir_inode_operations" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb48351f8, "_copy_to_iter" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B0E31D033BFFC3594D4EA8D");
