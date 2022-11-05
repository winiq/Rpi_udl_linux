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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x8cb305ff, "pskb_trim_rcsum_slow" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x82baa22e, "init_net" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A4AB9E7090438580206A84");
