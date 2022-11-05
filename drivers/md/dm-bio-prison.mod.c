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
	{ 0x38e46431, "mempool_exit" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x3bf877b8, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C2D044E210E19C3D6C3870");
