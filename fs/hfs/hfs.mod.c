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
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7bf2069e, "sb_min_blocksize" },
	{ 0xc3dc3ad3, "unload_nls" },
	{ 0x1cbde27c, "make_bad_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xb69708bc, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1441f8cd, "iget5_locked" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x107c36ce, "seq_escape" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x8efeed63, "__lock_buffer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xe293c535, "block_read_full_page" },
	{ 0xc514b829, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe17220e5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb40b80ce, "generic_read_dir" },
	{ 0x624dffd5, "igrab" },
	{ 0x4d06ee5a, "unlock_buffer" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x3e2ad8da, "set_page_dirty" },
	{ 0x491ebcc2, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xaab7d71, "from_kgid_munged" },
	{ 0x95775e45, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe9cf967c, "__insert_inode_hash" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3aa8d661, "inode_add_bytes" },
	{ 0xf68227d1, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x917ea2b9, "write_inode_now" },
	{ 0xf1e046cc, "panic" },
	{ 0x3480d68b, "mpage_writepages" },
	{ 0x76425ad7, "cdrom_multisession" },
	{ 0x9166fada, "strncpy" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xae49cb43, "set_nlink" },
	{ 0x9f7e77e9, "setattr_copy" },
	{ 0x4ef9acdc, "sync_dirty_buffer" },
	{ 0x26104b9c, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1aef4801, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8b956c2, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x4bc06e40, "cdrom_read_tocentry" },
	{ 0x8c9b81d, "mark_page_accessed" },
	{ 0xa13391fc, "file_write_and_wait_range" },
	{ 0x823b287d, "inode_init_once" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x1adf2b7e, "generic_file_mmap" },
	{ 0x554084ee, "pagecache_write_end" },
	{ 0xc52111fc, "block_write_full_page" },
	{ 0xb9ab1ceb, "sync_blockdev" },
	{ 0x57ee1587, "truncate_inode_pages_final" },
	{ 0x2e0ff90b, "try_to_free_buffers" },
	{ 0xca55c602, "make_kuid" },
	{ 0xc3bc839, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1625d0e, "generic_write_end" },
	{ 0x92997ed8, "_printk" },
	{ 0x10a669c7, "unlock_new_inode" },
	{ 0xe597e01f, "kill_block_super" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x1ad5d1d9, "inode_newsize_ok" },
	{ 0xf56b1089, "inode_set_bytes" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3bbd2ed1, "generic_file_write_iter" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x73c9b938, "iput" },
	{ 0xb1d1a818, "cont_write_begin" },
	{ 0xec7c61fc, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c63bc49, "inode_dio_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x88e7257a, "current_time" },
	{ 0x6fbc1de1, "load_nls_default" },
	{ 0xdb892eed, "d_splice_alias" },
	{ 0x137bac3, "sync_filesystem" },
	{ 0x3d95ff33, "__set_page_dirty_buffers" },
	{ 0xe6f11c79, "sb_set_blocksize" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0xce145f2a, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x207d9b07, "mark_buffer_dirty" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0xd479a573, "new_inode" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xcd02d52f, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd45137, "clear_inode" },
	{ 0x80354841, "d_instantiate" },
	{ 0x56f04efc, "pagecache_write_begin" },
	{ 0x6197c046, "__put_page" },
	{ 0x18cc7c27, "generic_block_bmap" },
	{ 0x2b49ad0e, "generic_listxattr" },
	{ 0x498c10d7, "clear_nlink" },
	{ 0xb1f6cd92, "iget_locked" },
	{ 0x4663c18b, "setattr_prepare" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "535688306994AFEECE787BE");
