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
	{ 0x90f80122, "blkdev_issue_discard" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6963c855, "drop_nlink" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x7bf2069e, "sb_min_blocksize" },
	{ 0x53b954a2, "up_read" },
	{ 0xc3dc3ad3, "unload_nls" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xb69708bc, "__mark_inode_dirty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x139bb5b1, "__generic_file_fsync" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0x76367c76, "__fs_parse" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x910b6d7a, "blkdev_issue_flush" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x814e762b, "dput" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x76ddcc46, "get_tree_bdev" },
	{ 0x2cf13a2, "inc_nlink" },
	{ 0x1791abd8, "d_find_alias" },
	{ 0xc514b829, "init_user_ns" },
	{ 0x3096be16, "names_cachep" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x44435053, "filemap_fdatawait_range" },
	{ 0x56cbe140, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb40b80ce, "generic_read_dir" },
	{ 0xeed8cce0, "__getblk_gfp" },
	{ 0x624dffd5, "igrab" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x491ebcc2, "truncate_setsize" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaab7d71, "from_kgid_munged" },
	{ 0x95775e45, "make_kgid" },
	{ 0xe9cf967c, "__insert_inode_hash" },
	{ 0xdcb764ad, "memset" },
	{ 0xded17b87, "mpage_readpage" },
	{ 0xf68227d1, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x8e8d5f78, "d_rehash" },
	{ 0x917ea2b9, "write_inode_now" },
	{ 0xf1e046cc, "panic" },
	{ 0x3480d68b, "mpage_writepages" },
	{ 0x8b4eda35, "d_move" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xae49cb43, "set_nlink" },
	{ 0x68a4f1a8, "__wait_on_buffer" },
	{ 0x9f7e77e9, "setattr_copy" },
	{ 0x4ef9acdc, "sync_dirty_buffer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x26104b9c, "truncate_pagecache" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x1aef4801, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x8b956c2, "__brelse" },
	{ 0x94bf03ca, "utf8_to_utf32" },
	{ 0x823b287d, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xc6cbbc89, "capable" },
	{ 0xffdd950e, "invalidate_inode_buffers" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xd46fd223, "sync_mapping_buffers" },
	{ 0x1adf2b7e, "generic_file_mmap" },
	{ 0xc52111fc, "block_write_full_page" },
	{ 0xb9ab1ceb, "sync_blockdev" },
	{ 0xca55c602, "make_kuid" },
	{ 0xd27cfa0a, "generic_cont_expand_simple" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc3bc839, "load_nls" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1625d0e, "generic_write_end" },
	{ 0xe2dfaabe, "__breadahead" },
	{ 0x92997ed8, "_printk" },
	{ 0xe597e01f, "kill_block_super" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xa95807c3, "d_drop" },
	{ 0x12c6d04c, "fs_param_is_u32" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x3bbd2ed1, "generic_file_write_iter" },
	{ 0x59b48850, "iter_file_splice_write" },
	{ 0x37ad8f90, "fs_param_is_s32" },
	{ 0xff91eede, "fs_param_is_enum" },
	{ 0x73c9b938, "iput" },
	{ 0xb1d1a818, "cont_write_begin" },
	{ 0x37a0cba, "kfree" },
	{ 0x13881fa7, "iunique" },
	{ 0x4829a47e, "memcpy" },
	{ 0x88e7257a, "current_time" },
	{ 0xdb892eed, "d_splice_alias" },
	{ 0x137bac3, "sync_filesystem" },
	{ 0x125555bf, "write_dirty_buffer" },
	{ 0x3d95ff33, "__set_page_dirty_buffers" },
	{ 0x99e3dc6b, "block_truncate_page" },
	{ 0xe6f11c79, "sb_set_blocksize" },
	{ 0xe6669e2, "__bforget" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0xce145f2a, "__blockdev_direct_IO" },
	{ 0xfd6ab048, "inode_needs_sync" },
	{ 0xc64cdb61, "filemap_fdatawrite_range" },
	{ 0x71d1751f, "__find_get_block" },
	{ 0x207d9b07, "mark_buffer_dirty" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0xd479a573, "new_inode" },
	{ 0xcd02d52f, "generic_file_splice_read" },
	{ 0xe90774ac, "fs_param_is_string" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd45137, "clear_inode" },
	{ 0x80354841, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x18cc7c27, "generic_block_bmap" },
	{ 0x498c10d7, "clear_nlink" },
	{ 0x4663c18b, "setattr_prepare" },
	{ 0xf9f6ed55, "generic_fillattr" },
	{ 0xe235aa2, "truncate_inode_pages" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "018E85EC728C4A368B5974B");
