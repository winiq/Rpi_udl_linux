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
	{ 0x3d774594, "fs_bio_set" },
	{ 0x745e056f, "iget_failed" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6963c855, "drop_nlink" },
	{ 0x7bf2069e, "sb_min_blocksize" },
	{ 0xda458023, "submit_bio_wait" },
	{ 0xc3dc3ad3, "unload_nls" },
	{ 0x20834d4a, "bio_alloc_bioset" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xb69708bc, "__mark_inode_dirty" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xea36d77b, "filemap_write_and_wait_range" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x107c36ce, "seq_escape" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x910b6d7a, "blkdev_issue_flush" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x814e762b, "dput" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x2cf13a2, "inc_nlink" },
	{ 0xe293c535, "block_read_full_page" },
	{ 0xc514b829, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe17220e5, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d4cd323, "page_symlink_inode_operations" },
	{ 0xb40b80ce, "generic_read_dir" },
	{ 0x3c3ff9fd, "sprintf" },
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
	{ 0x535c525f, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3aa8d661, "inode_add_bytes" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0x3480d68b, "mpage_writepages" },
	{ 0x6a6dbabd, "blkdev_issue_zeroout" },
	{ 0x76425ad7, "cdrom_multisession" },
	{ 0x9166fada, "strncpy" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x83554cac, "from_kgid" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0x2537a544, "security_inode_init_security" },
	{ 0x5a921311, "strncmp" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xae49cb43, "set_nlink" },
	{ 0x9f7e77e9, "setattr_copy" },
	{ 0xe2e1f7db, "page_symlink" },
	{ 0x26104b9c, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x1aef4801, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x9f35bd31, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x696d325a, "bio_put" },
	{ 0x4bc06e40, "cdrom_read_tocentry" },
	{ 0x8c9b81d, "mark_page_accessed" },
	{ 0xa13391fc, "file_write_and_wait_range" },
	{ 0x823b287d, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x1adf2b7e, "generic_file_mmap" },
	{ 0x554084ee, "pagecache_write_end" },
	{ 0xc52111fc, "block_write_full_page" },
	{ 0x57ee1587, "truncate_inode_pages_final" },
	{ 0xca55c602, "make_kuid" },
	{ 0x2e0ff90b, "try_to_free_buffers" },
	{ 0xd27cfa0a, "generic_cont_expand_simple" },
	{ 0xc3bc839, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1625d0e, "generic_write_end" },
	{ 0x92997ed8, "_printk" },
	{ 0x10a669c7, "unlock_new_inode" },
	{ 0xe597e01f, "kill_block_super" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0xf56b1089, "inode_set_bytes" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x803ee0ff, "sync_inode_metadata" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x3bbd2ed1, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x73c9b938, "iput" },
	{ 0xb1d1a818, "cont_write_begin" },
	{ 0xec7c61fc, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c63bc49, "inode_dio_wait" },
	{ 0x8e7c1d22, "ihold" },
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
	{ 0xc6645fe1, "inode_set_flags" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0x937a1113, "init_special_inode" },
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
	{ 0x498c10d7, "clear_nlink" },
	{ 0xb1f6cd92, "iget_locked" },
	{ 0x4663c18b, "setattr_prepare" },
	{ 0xf9f6ed55, "generic_fillattr" },
	{ 0xa3447157, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa008509e, "bio_associate_blkg" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "06906C69174226BE6AA63B7");