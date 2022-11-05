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
	{ 0x2d3385d3, "system_wq" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc9d3af78, "nf_conntrack_find_get" },
	{ 0x9158ff3f, "__do_once_done" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "48F9A7D2CD4E7926C21ABC9");
