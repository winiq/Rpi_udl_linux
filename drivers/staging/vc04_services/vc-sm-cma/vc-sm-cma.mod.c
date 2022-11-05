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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x79a73a75, "dma_map_sg_attrs" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x5dc00640, "single_open" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc407cff0, "vchiq_msg_queue_push" },
	{ 0x8656cd98, "dma_unmap_sg_attrs" },
	{ 0x82dbba5b, "dma_get_sgtable_attrs" },
	{ 0x416e5db, "single_release" },
	{ 0xb3c451bd, "dma_mmap_attrs" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x69584b0, "dma_buf_detach" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xbd19b5, "seq_read" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x327c3232, "vchiq_msg_hold" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0xba7b3b54, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x91d707e2, "dma_sync_sg_for_device" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6e238242, "dma_buf_fd" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x69234131, "dma_buf_put" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xaa1fd904, "dma_buf_get" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x1bb6632, "dma_buf_unmap_attachment" },
	{ 0xa22e9df3, "vchiq_add_connected_callback" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x87ca77dc, "dma_buf_map_attachment" },
	{ 0x9522566d, "dma_buf_export" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0xd1563929, "vchiq_open_service" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7f39ace4, "dma_buf_attach" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7bd8e819, "vchiq_initialise" },
	{ 0xcf2a6966, "up" },
	{ 0xf33d52d1, "set_user_nice" },
	{ 0x10ae0841, "dma_sync_sg_for_cpu" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xd90fd29a, "vchiq_connect" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C89BFABB62C9E9D5B540AD8");
