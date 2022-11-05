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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6d5ef163, "vchiq_release_message" },
	{ 0x582ed8ca, "vchiq_bulk_receive" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x2f8c431, "vchiq_queue_kernel_message" },
	{ 0xb05b02ae, "vchiq_release_service" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdf22bf16, "vc_sm_cma_import_dmabuf" },
	{ 0x9166fada, "strncpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x469ae1ba, "vchiq_shutdown" },
	{ 0x92997ed8, "_printk" },
	{ 0xe95e0941, "vchiq_close_service" },
	{ 0xd1563929, "vchiq_open_service" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7bd8e819, "vchiq_initialise" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1c60d406, "vchiq_get_service_userdata" },
	{ 0xd90fd29a, "vchiq_connect" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9d6478fe, "vchiq_use_service" },
};

MODULE_INFO(depends, "vc-sm-cma");


MODULE_INFO(srcversion, "1068DD8F4A0BE4C25F9DCC8");
