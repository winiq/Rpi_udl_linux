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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x98cf60b3, "strlen" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x37b50661, "kthread_unuse_mm" },
	{ 0x76367c76, "__fs_parse" },
	{ 0xf7a2cfc1, "stream_open" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x1f1b7926, "generic_delete_inode" },
	{ 0x814e762b, "dput" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd440f41d, "dup_iter" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9021564e, "d_add" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x999e8297, "vfree" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x93bd6ea7, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x35eb6dac, "d_delete" },
	{ 0x95775e45, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x692d02f5, "sg_alloc_table_from_pages_segment" },
	{ 0x26969d5b, "kill_litter_super" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9f030c89, "unregister_gadget_item" },
	{ 0x6e93807c, "usb_ep_autoconfig" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5102a30b, "do_wait_intr_irq" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfdfc3547, "usb_function_register" },
	{ 0x8ced484a, "compat_ptr_ioctl" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0xa916b694, "strnlen" },
	{ 0xdd18cf86, "simple_dir_operations" },
	{ 0xca55c602, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x12c6d04c, "fs_param_is_u32" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8db4107e, "config_ep_by_speed" },
	{ 0x8ba0976c, "get_tree_nodev" },
	{ 0xe946549f, "kthread_use_mm" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8ac18822, "kiocb_set_cancel_fn" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfda7424c, "fs_param_is_bool" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5c7565d3, "logfc" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x49d9f030, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x88e7257a, "current_time" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0x9d893e16, "simple_statfs" },
	{ 0xd1b2ec27, "d_alloc_name" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xfe783c2d, "usb_interface_id" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xd479a573, "new_inode" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x68c38fa4, "vmalloc_to_page" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0xcc0596d8, "simple_dir_inode_operations" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc61d2614, "usb_string_ids_n" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xb48351f8, "_copy_to_iter" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "14FB10EFB1936E1CE772452");
