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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcbaee58b, "media_device_register_entity" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0x1b9ef33d, "media_device_unregister_entity" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "mc");

MODULE_ALIAS("i2c:si2157");
MODULE_ALIAS("i2c:si2146");
MODULE_ALIAS("i2c:si2141");
MODULE_ALIAS("i2c:si2177");

MODULE_INFO(srcversion, "09C49D035A838BC53621732");
