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
	{ 0x8835a6c3, "dm_unregister_target" },
	{ 0x9a592dd7, "dm_register_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1aeba323, "dm_set_target_max_io_len" },
	{ 0x1015558b, "dm_get_device" },
	{ 0xa8dca0ae, "dm_table_get_mode" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb8db3891, "dm_put_device" },
	{ 0xa008509e, "bio_associate_blkg" },
	{ 0x92997ed8, "_printk" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B605CBC8B1A90E19DD7C79");
