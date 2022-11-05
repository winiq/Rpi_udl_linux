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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x79a73a75, "dma_map_sg_attrs" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x8656cd98, "dma_unmap_sg_attrs" },
	{ 0x2b2e368c, "__mmap_lock_do_trace_released" },
	{ 0xbd628752, "__tracepoint_mmap_lock_start_locking" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0x860e78d8, "__mmap_lock_do_trace_start_locking" },
	{ 0x668b19a1, "down_read" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9e316209, "vmap" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x2e2aa5ba, "videobuf_alloc_vb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x92997ed8, "_printk" },
	{ 0x17fbb899, "pin_user_pages" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x5efdd68b, "__tracepoint_mmap_lock_released" },
	{ 0xbe118c52, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0xffe49483, "videobuf_queue_core_init" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x10ae0841, "dma_sync_sg_for_cpu" },
	{ 0x80fe4637, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x68c38fa4, "vmalloc_to_page" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x6478bb5a, "unpin_user_pages_dirty_lock" },
};

MODULE_INFO(depends, "videobuf-core");


MODULE_INFO(srcversion, "0A0912C5283135ADF526742");
