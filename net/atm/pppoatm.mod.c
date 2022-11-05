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
	{ 0x23f6ac2, "deregister_atm_ioctl" },
	{ 0xdf30a3e2, "register_atm_ioctl" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf8a06457, "vcc_process_recv_queue" },
	{ 0xdd981006, "__module_get" },
	{ 0xf33c04f3, "ppp_register_channel" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x14c81c2f, "ppp_unit_number" },
	{ 0x3b30bbb8, "ppp_channel_index" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xb7e25bd9, "skb_realloc_headroom" },
	{ 0xb7377510, "skb_push" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6587c97e, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3f8da99, "ppp_unregister_channel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x439777eb, "ppp_input_error" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xc3e795ff, "ppp_input" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x597c650c, "ppp_output_wakeup" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "624DB693C091F1C66D94F7A");
