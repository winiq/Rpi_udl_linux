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
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0x8656cd98, "dma_unmap_sg_attrs" },
	{ 0x82dbba5b, "dma_get_sgtable_attrs" },
	{ 0xb3c451bd, "dma_mmap_attrs" },
	{ 0x69584b0, "dma_buf_detach" },
	{ 0x28753752, "dma_map_resource" },
	{ 0xc312b011, "set_page_dirty_lock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6950e9d9, "dma_map_sgtable" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xb397584e, "dma_buf_vunmap" },
	{ 0x91d707e2, "dma_sync_sg_for_device" },
	{ 0x692d02f5, "sg_alloc_table_from_pages_segment" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1bb6632, "dma_buf_unmap_attachment" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x87ca77dc, "dma_buf_map_attachment" },
	{ 0x9522566d, "dma_buf_export" },
	{ 0x81822a88, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x7f39ace4, "dma_buf_attach" },
	{ 0xadc9aed4, "get_device" },
	{ 0x7794034, "dma_unmap_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x48347590, "vb2_common_vm_ops" },
	{ 0x10ae0841, "dma_sync_sg_for_cpu" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x34191dca, "dma_buf_vmap" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "videobuf2-common,videobuf2-memops");


MODULE_INFO(srcversion, "79D82BDD5034B4D17B8AD3B");