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
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x866d1cc6, "pci_release_region" },
	{ 0x8656cd98, "dma_unmap_sg_attrs" },
	{ 0x980f9261, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe5eb0c5b, "pci_set_master" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x91ee43e3, "pci_unregister_driver" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xedc03953, "iounmap" },
	{ 0xe776c4a6, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x68c38fa4, "vmalloc_to_page" },
	{ 0x3c505ad4, "pci_enable_device" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0xce516814, "pci_request_region" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8B235CC2BCD69D247BB2882");
