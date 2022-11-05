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
	{ 0x7bf2069e, "sb_min_blocksize" },
	{ 0xda458023, "submit_bio_wait" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x20834d4a, "bio_alloc_bioset" },
	{ 0x1cbde27c, "make_bad_inode" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x76367c76, "__fs_parse" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x9a31bc71, "pagecache_get_page" },
	{ 0x76ddcc46, "get_tree_bdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb40b80ce, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4804f088, "bio_free_pages" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x95775e45, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe9cf967c, "__insert_inode_hash" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc716e66, "d_obtain_alias" },
	{ 0x7e8df7dd, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0x9166fada, "strncpy" },
	{ 0xb1415fd8, "bio_kmalloc" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xae49cb43, "set_nlink" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x711f846b, "generic_ro_fops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x858fce92, "unlock_page" },
	{ 0x9f35bd31, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x696d325a, "bio_put" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x823b287d, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xca55c602, "make_kuid" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0x10a669c7, "unlock_new_inode" },
	{ 0xe597e01f, "kill_block_super" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x5c7565d3, "logfc" },
	{ 0xff91eede, "fs_param_is_enum" },
	{ 0x73c9b938, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x2193a2a8, "page_get_link" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb892eed, "d_splice_alias" },
	{ 0x137bac3, "sync_filesystem" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0x937a1113, "init_special_inode" },
	{ 0xd479a573, "new_inode" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3322c209, "flush_dcache_page" },
	{ 0x6197c046, "__put_page" },
	{ 0xb1f6cd92, "iget_locked" },
	{ 0xa008509e, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0043021E1941445029C30E0");
